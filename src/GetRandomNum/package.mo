package GetRandomNum
  function runRandomNum
    output Integer status "Return status of runRandomNum()";
    external "C" status = getRandomNumCFunction()
    annotation( 
               Library="curl",
               IncludeDirectory="modelica://GetRandomNum/source",
               Include="#include \"getRandomNum.c\"");
  end runRandomNum;
end GetRandomNum;