package GetRandomNum
  function runRandomNum
    output Integer status "Return status of runRandomNum()";
    external "C" status = RandomN()
    annotation( 
               Library="curl",
               IncludeDirectory="modelica://GetRandomNum/source",
               Include="#include \"randomNum.c\"");
  end runRandomNum;
end GetRandomNum;