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
	
	if (unk_0x2C897F101BA20806(2))
	{
		func_4();
	}
	if (unk_0x538DF9E5B1DF01EB(uScriptParam_0))
	{
		unk_0x3CC3106305C40A28(uScriptParam_0, 1);
		Local_4 = { unk_0xBF8499F46AD9093A(uScriptParam_0, 1) };
		Local_7 = { unk_0x1A6D58515B4120D5(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x538DF9E5B1DF01EB(uScriptParam_0))
		{
			if (unk_0xC3AF8259DB162ECA(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x48268A6E65463BFD(uScriptParam_0))
						{
							unk_0x939DA7EBCC6588FF(joaat("p_abat_roller_1_col"));
							if (unk_0x5494F37F35C1D7D7(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0x8AC4394F3C9173EE(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0x0BBAD8A322CB595E(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x48268A6E65463BFD(uScriptParam_0))
						{
							if (unk_0x16CDA1894CFE0781(joaat("michael2")) > 0)
							{
								unk_0x3D28909AF30D70F4("map_objects");
								if (unk_0x6C47E32491756A1A("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x48268A6E65463BFD(uScriptParam_0))
						{
							if (unk_0x16CDA1894CFE0781(joaat("michael2")) > 0)
							{
								if (Global_86878)
								{
									if (unk_0x6C47E32491756A1A("map_objects"))
									{
										unk_0xCF3A4FADE0BA9E36(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0x538DF9E5B1DF01EB(uLocal_3))
						{
							Var3 = { unk_0xBF8499F46AD9093A(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f, 0))
							{
								Var6 = { Var0 - Var3 };
								unk_0x6C43BF7625967266(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0x0C380BB05B91042D()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_86879 = 1;
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

int func_2(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x3545D662A0A53653((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x3545D662A0A53653((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x3545D662A0A53653((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x3545D662A0A53653((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x3545D662A0A53653((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_4()
{
	if (unk_0x538DF9E5B1DF01EB(uLocal_3))
	{
		unk_0xD4C90F16EBBFE620(&uLocal_3);
	}
	unk_0xEA054561294AEC10(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x82706E6C897B0FA1();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0x9BA82E09A986BA4B(uParam0, uParam0))
	{
	}
}

