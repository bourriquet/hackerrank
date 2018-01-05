'use strict';

var _input = '';
var _index = 0;

process.stdin.on('data', (data) => { _input += data; });
process.stdin.on('end', () => {
	_input = _input.split(new RegExp('[\n ]+'));
	main(+(_input[0]), +(_input[1]), +(_input[2]));    
});

function main(mealCost, tipPercent, taxPercent) {
    var totalCost = Math.round(mealCost + (0.01 * tipPercent * mealCost) + (0.01 * taxPercent * mealCost));

    console.log("The total meal cost is " + totalCost + " dollars.");
}
