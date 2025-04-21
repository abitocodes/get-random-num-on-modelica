model SimpleCircuitWithNoise
  import Modelica.Electrical.Analog.Basic.Resistor;
  import Modelica.Electrical.Analog.Basic.Ground;
  import Modelica.Electrical.Analog.Sources.SupplyVoltage;
  import RandomNumberGenerator;

  RandomNumberGenerator randomNumberGen;

  SupplyVoltage voltageSource(
    Vps=10 + randomNumberGen.randomNumber,
    Vns=-10 - randomNumberGen.randomNumber);

  Resistor resistor(R=100);
  Ground ground;

  Real I(unit="A") = resistor.i;
  Real V(unit="V") = voltageSource.Vps;

initial algorithm
  print("Vps 값: " + String(voltageSource.Vps) + "\n");

equation
  connect(voltageSource.pin_p, resistor.p);
  connect(resistor.n, ground.p);
  connect(voltageSource.pin_n, ground.p);
end SimpleCircuitWithNoise;
