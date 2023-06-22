#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n, q, od_no = 0, ev_no = 0, total = 0;
        cin >> n >> q;

        vector<long long>v(n);

        for(int i= 0; i<n; i++)
        {
            cin >> v[i];

            if(v[i] %2 == 0)
            {
                ev_no++;
            }else
            {
                od_no++;
            }
            total += v[i];
        }


        while(q--)
        {
            int tp, x;
            cin >> tp >> x;

            if(tp == 0)
            {
                if(ev_no == 0)
                {
                    cout << total << endl;
                    continue;
                }

                total += (ev_no * x);
                cout <<  total  << endl;
                if(x %2 != 0)
                {
                    od_no += ev_no;
                    ev_no = 0;
                }


            }else
            {
                if(od_no == 0)
                {
                    cout << total << endl;
                    continue;
                }

                total += (od_no * x);
                cout << total  << endl;

                if(x %2 != 0)
                {
                    ev_no += od_no;
                    od_no = 0;

                }

            }

        }

    }
}
