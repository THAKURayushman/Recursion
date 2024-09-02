function swap(arr, x, y) {
  let t = arr[x];
  arr[x] = arr[y];
  arr[y] = t;
}

function reverse(arr, l, r) {
  if (l >= r) {
    return;
  }
  swap(arr, l, r);
  reverse(arr, l + 1, r - 1); //recursively calling reverse function on subarray
  return arr;
}

let arr = [1, 2, 3, 4, 5, 6];
let l = 0;
let r = arr.length - 1;
reverse(arr, l, r);

console.log(arr);
