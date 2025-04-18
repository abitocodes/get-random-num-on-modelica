model TestRandomNum
  import GetRandomNum.runRandomNum;
  Integer status;
  equation
    status = runRandomNum();
end TestRandomNum;