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

function Solution(){
    var q = [];
    var s = [];
    
    this.pushCharacter = function (ch) {
        s.push(ch);
    }
    
    this.enqueueCharacter = function (ch) {
        q.push(ch);
    }
    
    this.popCharacter = function () {
        return s.pop();
    }
    
    this.dequeueCharacter = function () {
        return q.splice(0,1);
    }
}

function main() {
    var s = readLine();
    var len = s.length;
    var obj = new Solution();
    
    for (var i = 0; i < len; i++) {
        obj.pushCharacter(s.charAt(i));
        obj.enqueueCharacter(s.charAt(i));
    }
  
    var isPalindrome = true;

    for (var i = 0; i < len/2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            break;
        }
    }
    
    if (isPalindrome)
        console.log("The word, "+s+", is a palindrome.");    
    else
        console.log("The word, "+s+", is not a palindrome.");
}
