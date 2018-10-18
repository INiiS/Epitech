

var dessiner = function (){
    var canvas = document.querySelector("footer canvas");
        if(canvas.getContext) {
            var ctx = canvas.getContext('2d');

            ctx.globalCompositeOperation = 'destination-over';

            ctx.beginPath();
            ctx.moveTo(6, 6);
            ctx.lineTo(14, 10);
            ctx.lineTo(6, 14);
            ctx.fillStyle = "white";
            ctx.fill();
        }


};
var last_volume = 1.0;
var audio = new Audio('./bonus/audio.ogg');


var pause_btn = document.getElementsByTagName("button")[0];
var stop_btn = document.getElementsByTagName("button")[1];
var mute_btn = document.getElementsByTagName("button")[2];



var lireAudio = function (){
    audio.play();
}

var pauseAudio = function (){
    if(audio.paused)
        audio.play()
    else
        audio.pause();
}
var stopAudio = function(){
    audio.pause();
    audio.currentTime = 0;
}

var muteAudio = function() {
    console.log("muted");
    if( audio.volume > 0){
        audio.volume = 0.0;
    }
    else{
        audio.volume = 1.0;
    }


}

dessiner();

document.querySelector("canvas").addEventListener("click", lireAudio);
stop_btn.addEventListener("click", stopAudio);
pause_btn.addEventListener("click", pauseAudio);
mute_btn.addEventListener("click", muteAudio);


