/*jslint browser this */
/*global _, shipFactory, player, utils */

(function (global) {
    "use strict";

    var sheep = {
        dom: {
            parentNode: {
                removeChild: function () {
                }
            }
        }
    };

    var player = {
        grid: [],
        tries: [],
        fleet: [],
        game: null,
        activeShip: 0,
        init: function () {
            // créé la flotte
            this.fleet.push(shipFactory.build(shipFactory.TYPE_BATTLESHIP));
            this.fleet.push(shipFactory.build(shipFactory.TYPE_DESTROYER));
            this.fleet.push(shipFactory.build(shipFactory.TYPE_SUBMARINE));
            this.fleet.push(shipFactory.build(shipFactory.TYPE_SMALL_SHIP));

            // créé les grilles
            this.grid = utils.createGrid(10, 10);
            this.tries = utils.createGrid(10, 10);
        },

        play: function (col, line) {
            // appel la fonction fire du game, et lui passe une calback pour récupérer le résultat du tir
            this.game.fire(this, col, line, _.bind(function (hasSucced) {
                this.tries[line][col] = hasSucced;
            }, this));
        },
        // quand il est attaqué le joueur doit dire si il a un bateaux ou non à l'emplacement choisi par l'adversaire
        receiveAttack: function (col, line, callback) {
            var succeed = false;

            if (this.grid[line][col] !== 0) {
                succeed = true;
                this.grid[line][col] = 0;
            }
            callback.call(undefined, succeed);
        },
        setActiveShipPosition: function (x, y) {
            var ship = this.fleet[this.activeShip];
            var i = 0;
            var vertical = player.fleet[player.activeShip].vertical;

            if (!vertical) {



                /*
                 * getLife étant un entier compris entre 3 et 5
                 * On récupère sa moitié, arrondie à l'inférieur
                 * afin de pouvoir offset le board d'un nombre entier compris entre 1 et 2
                 */

                x = x - Math.floor(ship.getLife() / 2);

                // Double boucle : on check la place libre
                // et dans la seconde on dispose le bateau
                // On retourne false si place prise, true si placement OK

                for (var i = 0; i < ship.getLife(); i++) {
                    if (this.grid[y][x + i] !== 0)
                        return false;
                }

                for (var i = 0; i < ship.getLife(); i++) {
                    this.grid[y][x + i] = ship.getId();
                }

                return true;


            }
            else {

                y = y - Math.floor(ship.getLife() / 2);
                console.log("y :" + y);
                console.log("x/ " + x);
                for (var i = 0; i < ship.getLife(); i++) {
                    if(y < 0)
                        return false;
                    if (this.grid[y + i][x] !== 0)
                        return false;
                }

                for (var i = 0; i < ship.getLife(); i++)
                    this.grid[y + i][x] = ship.getId();
            }
            return true;


        },
        clearPreview: function () {
            this.fleet.forEach(function (ship) {
                if (ship.dom.parentNode) {
                    ship.dom.parentNode.removeChild(ship.dom);
                }
            });
        },
        resetShipPlacement: function () {
            this.clearPreview();

            this.activeShip = 0;
            this.grid = utils.createGrid(10, 10);
        },
        activateNextShip: function () {
            if (this.activeShip < this.fleet.length - 1) {
                this.activeShip += 1;
                return true;
            } else {
                return false;
            }
        },
        renderTries: function (grid) {
            this.tries.forEach(function (row, rid) {
                row.forEach(function (val, col) {
                    var node = grid.querySelector('.row:nth-child(' + (rid + 1) + ') .cell:nth-child(' + (col + 1) + ')');

                    if (val === true) {
                        node.style.backgroundColor = '#e60019';
                    } else if (val === false) {
                        node.style.backgroundColor = '#aeaeae';
                    }
                });
            });
        },
        setGame: function (gameObject) {
            this.game = gameObject;
        },
    };

    global.player = player;

}(this));
