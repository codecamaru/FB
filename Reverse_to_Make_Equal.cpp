#include<bits/stdc++.h>
// Add any extra import statements you may need here
#include<unordered_map>
using namespace std; 

// Add any helper functions you may need here


bool areTheyEqual(vector<int>& array_a, vector<int>& array_b){
  // Write your code here
  if(array_a.size() != array_b.size()){ return false; }
  unordered_map<int,int> m1;
  unordered_map<int,int> m2;
  for(int i : array_a){
    m1[i]++;
  }
  for(int i : array_b){
    m2[i]++;
  }
  auto it = m1.begin();
  while(it != m1.end()){
    if(m2.find(it->first) != m2.end()){
      if(m1[it->first] == m2[it->first]){  }
      else{ return false; }
    }
    else{
      return false;
    }
    it++;
  }
  return true;
}
