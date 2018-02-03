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
    var n = parseInt(readLine());
    
    var max = 0;
    var count = 0;
    
    while (n > 0) {
        if (n % 2 == 1) {
            count++;
            if (count > max) {
                max = count;
            }
        } else {
            count = 0;
        }
        
        n = parseInt(n / 2);
    }
    
    console.log(max);
}

