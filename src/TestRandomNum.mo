
  model TestRandomNum
  function runRandomNum
    output Integer randomNumber "Return random number of runRandomNum()";
    external "C" randomNumber = getRandomNumCFunction()
    annotation(
              Library="curl",
              IncludeDirectory="modelica://TestRandomNum",
              Include="#include \"getRandomNum.c\"");
  end runRandomNum;
  initial equation
    runRandomNum();
  end TestRandomNum; 