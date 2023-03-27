# Instructions to code

0. git branch -b local
1. Code karo on branch **local** until you come across a checkpoint and you want to save the current version
2. git stash
3. git checkout master
4. git pull origin master
5. git stash list
6. git stash apply stash@{0}
6. Resolve merge conflicts
7. git add .
8. git commit -m "time \<time_value\>"
   git commit -m "area \<area_bram\> \<area_ff\> \<area_lut\>"
9. git push origin master
10. git branch -d local
11. git stash drop stash@{0}
    
