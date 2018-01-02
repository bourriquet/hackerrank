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
    var i = 4
    var d = 4.0
    var s = "HackerRank "
    
    var another_i, another_d, another_s;

    another_i = readLine();
    another_d = readLine();
    another_s = readLine();

    console.log(i + parseInt(another_i));
    console.log((d + (parseFloat(another_d))).toFixed(1));
    console.log(s + another_s);
}
