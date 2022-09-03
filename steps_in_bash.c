/*
    工作区内是untracked files;
    add操作进入暂存区;
    commit进入本地版本库;
    push进入GitHub远程仓库;

    pull直接从远程仓库进入工作区;
    fetch把文件从远程仓库拉入本地版本库，本地文件暂时无变化;
    diff比较本地版本库和本地文件的区别;

Error:
    git commit -m "version-1" error:
        ->  git commit -am "version-1"
    git push origin master error:
        -> git pull --rebase origin master
    OpenSSL SSL_connect: Connection was reset in connection to github.com:443
        1.choose another proxy dot(in clash,dot 2 is OK)
        2.use SSL to log in------wait to realize
*/

Edit your code in your our PC;
In the folder of your code,click the right key of your mouse,choose "Git Bash here";
Go to your github account,create a new repository and give it a name;

Now in your bash:
{
    echo "version1" > first.md 
    git config --global user.name Yw-xwx
    git init
    git add main.c test.c
    git commit -m "message-when-you-commit"
    git push origin master
    git pull origin master
    git clone <url>
    
}

Others:
{
set up the name and email:
    git config --global user.name "username"
    git config --global user.email  useremail@qq.com
assure the name and email:
    git config user.name
    git config user.email
    
    git log-----check the history of the repository
    touch .gitignore-----create a file to ignore files in it
        in gitignore,you can just input the name of the file,so it will ignore the file when you commit a lot of files to your github
    

branch:
    git branch BranchName-----create a new branch
    git branch  -----show all your branches
    git checkout BranchName-----go to the new branch
    git checkout -b BranchName-----create a new branch and go to the new branch
    git branch -d BranchName------delete the branch:(-D to delete it very sure)

}