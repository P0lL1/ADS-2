int cbinsearch(int *arr, int size, int value){
int first = 0;
int last = size - 1;
int search = 0;
while(first <= last){
int middle = first + (last-first)/2;
if(arr[middle] == value){
search++;
for(int i = 1; arr[middle + i] == value; i++){
search++;
}
for(int j = 1; arr[middle - j] == value; j++){
search++;
}
return search;
}
if(arr[middle] < value){
first = middle + 1;
else last = middle - 1;
}
}
return search;
}
 
это первое
 
int countPairs1(int* arr, int len, int value) {
int search = 0;
for (int i = 0; i < len - 1; i++) {
for (int j = i + 1; j < len; j++) {
if ((arr[i] + arr[j]) == value) {
search = search+1;
}
}
}
return search;
}
int countPairs2(int* arr, int len, int value) {
int search = 0;
for (int i = 0; i < len - 1; i++)
{
for (int j = len - 1; j > i; j--)
{
if (arr[i] + arr[j] == value)
{
search = search + 1;
}
}
}
return search;
}
int countPairs3(int *arr, int len, int value)
{
int c = 0;
for (int i = 0; i < len - 1; i++)
{
int left = i, right = len;

while (left < right-1)
{
int mid = (left + right) / 2;
if (arr[i] + arr[mid] == value)
{
c++;
int j = mid+1;
while (arr[i] + arr[j] == value && j <right)
{
c++;
j++;
}
j = mid - 1;
while (arr[i] + arr[j] == value && j>left)
{
c++;
j--;
}
break;
}
if (arr[i] + arr[mid] > value)
right = mid;
else
left = mid;
}

}
return c;
}
