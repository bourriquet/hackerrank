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

function convertToBinary(num) {
    var numBin = "";
    
    while (num != 0) {
        var r = num % 2;
        numBin += r;
        num = parseInt(num /= 2);
    }
    
    return numBin;
}

function consecutiveOnes(num) {
    var numBin = convertToBinary(num);
    
    var count = 0;
    var max = 0;
    
    for (var i = 0; i < numBin.length; i++) {
        if (numBin[i] === '1') {
            count++;
        }
        else {
            count = 0;
        }
        
        if (count > max) {
            max = count;
        }
    }
    
    return max;
}

function main() {
    var n = parseInt(readLine());
    
    console.log(consecutiveOnes(n));

}
