#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	struct<3> Local_4 = { 0, 0, 0 } ;
	struct<3> Local_7 = { 0, 0, 0 } ;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (unk_0xD63E63DFACCEB80E(2))
	{
		func_4();
	}
	if (unk_0x746960881FB19A89(uScriptParam_0))
	{
		unk_0xD9B13F0A69759C12(uScriptParam_0, 1);
		Local_4 = { unk_0x77009B1C011405A9(uScriptParam_0, 1) };
		Local_7 = { unk_0x045015AED79BD50E(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x746960881FB19A89(uScriptParam_0))
		{
			if (unk_0x65E80118D23AFB04(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x2722B58EF4A39A5E(uScriptParam_0))
						{
							unk_0x3BC6D217451D6BB7(joaat("p_abat_roller_1_col"));
							if (unk_0x149162179DBAEDB0(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f))
								{
									uLocal_3 = unk_0xA7DA1E6D4C99864B(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0x8F856D0103CF1B91(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x2722B58EF4A39A5E(uScriptParam_0))
						{
							if (unk_0x7B47A371E2D93C2C(joaat("michael2")) > 0)
							{
								unk_0xDA293E5084610B09("map_objects");
								if (unk_0x3DA2EED4204CE591("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x2722B58EF4A39A5E(uScriptParam_0))
						{
							if (unk_0x7B47A371E2D93C2C(joaat("michael2")) > 0)
							{
								if (Global_86798)
								{
									if (unk_0x3DA2EED4204CE591("map_objects"))
									{
										unk_0x70605753AED89021(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0x746960881FB19A89(uLocal_3))
						{
							Var3 = { unk_0x77009B1C011405A9(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f))
							{
								Var6 = { Var0 - Var3 };
								unk_0xFA51DC22F6E34F6E(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0xD1D592A06EBAAE4F()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_86799 = 1;
								iLocal_2 = 4;
							}
						}
						break;
					
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}

Vector3 func_1(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_2(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (unk_0xE3DAC530D2CCDAE3((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE3DAC530D2CCDAE3((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0xE3DAC530D2CCDAE3((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_3(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_4()
{
	if (unk_0x746960881FB19A89(uLocal_3))
	{
		unk_0x83A49C880CB75451(&uLocal_3);
	}
	unk_0x0880E86251A44B7F(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xE60DEFFB2A853900();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0x6B08EC9A88700FBB(uParam0, uParam0))
	{
	}
}

