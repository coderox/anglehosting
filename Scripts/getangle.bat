IF not EXIST C:\src (mkdir C:\src)
IF not EXIST C:\src\github.com (mkdir C:\src\github.com)
IF not EXIST C:\src\github.com\clarkezone (mkdir C:\src\github.com\clarkezone)
pushd C:\src\github.com\clarkezone
call git clone https://github.com/clarkezone/angle.git
cd angle
Set DEPOT_TOOLS_WIN_TOOLCHAIN=0
call python scripts/bootstrap.py
echo "calling glicnet"
call gclient sync
git checkout master