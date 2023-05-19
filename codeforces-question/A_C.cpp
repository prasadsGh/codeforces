class Solution
{
public:
    bool minisegment(vector<int> &v, int k, int time)
    {
        /*
         adding up k workers time will give us
         total time
        */
        /*
         if done parallely the total time to get the work completed will be the
         maximum time taken by one worker
        */
        int workers = 0;
        int n = v.size();
        int count = 0;
        int sum = 0;
        for (int i = 0; i + 1 < n; i++)
        {

            sum += v[i];
        }
        if (sum + v[i + 1] > time)
        {
            count++;
            sum = 0;
        }
    }
    if (v[n - 1] >= time)
        count++;
    return count >= k;
} int shipWithinDays(vector<int> &v, int k)
{
    int init = 1;
    int ans = 0;
    int n = v.size();
    int total = 0;
    for (int i = 0; i < n; i++)
        sum += v[i];
    while (init <= total)
    {
        int mid = (init + total) / 2;
        if (minisegment(v, k, mid))
        {
            init = mid + 1;
        }
        else
            total = mid - 1;
    }

    return init;
}
}
;