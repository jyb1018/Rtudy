#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int arr[8];
int selected[8];
int N, M;

void listing(deque<int> &s)
{
    if(s.size() == M)
	{
		for(int i = 0; i<s.size(); i++)
			cout << s.at(i) << " ";
		cout << endl;
		return;
	}
	
	for(int i = 0;i<N; i++)
		if(selected[i] == 0)
		{
			selected[i] = 1;
			s.push_back(arr[i]);
			listing(s);
			selected[i] = 0;
			s.pop_back();
		}
	
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    

    cin >> N >> M;
    
	fill(selected, selected +M, 0);
    for(int i = 0; i<N; i++)
        cin >> arr[i];
    sort(arr, arr+N);
	
	deque<int> s;
	listing(s);
    
    
    
    
    
}
