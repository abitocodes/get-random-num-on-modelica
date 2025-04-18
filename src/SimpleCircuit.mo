model SimpleCircuit
  import Modelica.Electrical.Analog.Basic.Resistor;
  import Modelica.Electrical.Analog.Basic.Ground;
  import Modelica.Electrical.Analog.Sources.SupplyVoltage;

  SupplyVoltage voltageSource(Vps=10, Vns=-10);
  Resistor resistor(R=100);
  Ground ground;

  Real I(unit="A") = resistor.i;
equation
  connect(voltageSource.pin_p, resistor.p);
  connect(resistor.n, ground.p);
  connect(voltageSource.pin_n, ground.p);
end SimpleCircuit;