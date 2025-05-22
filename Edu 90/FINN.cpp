#include<bits/stdc++.h>
using namespace std;

double calculate_distance(vector<double>& x2,vector<double>& x1)
{
    double dis = 0.0;
    for(int i=0;i<x2.size();i++){
        double vuj = (x2[i]-x1[i]) * (x2[i]-x1[i]);
        dis += vuj;
    }
    return sqrtl(dis);
}
vector<double> FINN_Search(vector<double>& query_point, vector<vector<double>>& data_point,int mx_it,int tol)
{
        double min_dis = numeric_limits<double>::infinity();
        
        vector<double> nearest_neighbor;

        int it = 1;
        while(it<=mx_it){
            for(auto &v:data_point){
                double distance = calculate_distance(query_point,v);
                if(distance<min_dis){
                    min_dis = distance;
                    nearest_neighbor = v;
                }
            }
            if(min_dis<tol) {break;}
            it++;
        }
        return nearest_neighbor;
}
int main()
{
    vector<double> query_point = {1.5,2.0,3.1};
    vector<vector<double>> data_points =
    {
        {1.0, 2.1, 3.3},
        {0.5, 1.8, 2.9},
        {1.6, 2.3, 3.5},
        {2.0, 2.0, 3.0}
    };
    int mx_iteration = 50;
    double tolerance = 0.05;

    //FINN algorithm
    vector<double> nearest_neighbor = FINN_Search(query_point,data_points,mx_iteration,tolerance);
    for(auto val:nearest_neighbor) cout<<val<<" ";
    return 0;
}