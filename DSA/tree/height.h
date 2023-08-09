#include <bits/stdc++.h>

int maxheight(auto root)
{

    if (root == NUll)
    {
        return 0;
    }

    int leftheight = maxheight(root->left);
    int rightheight = maxheight(root->right);



int maxhgt=max(leftheight, rightheight);

    return  maxhgt+1;
}
