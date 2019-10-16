var ballColor = ['red', 'blue', 'yellow', 'lightgrey', 'darkorchid', 'black', 'orange', 'deeppink', 'green', 'purple', 'saddlebrown', 'lightseagreen', 'deepskyblue', 'firebrick' ,'crimson'];
$("#put-ball-button").click(putBallInContainer);
function putBallInContainer()
{
  let ballCIndex = Math.floor(Math.random()*ballColor.length);
  let ballC = ballColor[ballCIndex];
  $(document.createElement('div')).css({
    backgroundColor:ballC,
    }).appendTo(".ball-container");

}
