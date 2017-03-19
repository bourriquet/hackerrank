process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;

process.stdin.on('data', function (data) {
    input_stdin += data;
});

process.stdin.on('end', function () {
    input_stdin_array = input_stdin.split("\n");
    main();    
});

function readLine() {
    return input_stdin_array[input_currentline++];
}

function main() {
    var arr = [];
    for (var i = 0; i < 6; i++){
       arr[i] = readLine().split(' ');
       arr[i] = arr[i].map(Number);
    }
    
    var max = (-9 * 7);
    
    for (var i = 0; i < 4; i++) {
        for (var j = 0; j < 4; j++) {
            var sum = 0;
            sum += (arr[i][j] + arr[i][j+1] + arr[i][j+2]);
            sum += (arr[i+1][j+1]);
            sum += (arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]);
            
            if (sum > max) {
                max = sum;
            }
        }
    }
    
    console.log(max);

}
