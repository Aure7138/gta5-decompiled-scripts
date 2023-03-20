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
	
	if (unk_0x89522B8E487D4EF9(2))
	{
		func_4();
	}
	if (unk_0xD51CFE69539DB6D8(uScriptParam_0))
	{
		unk_0x2878EC06B3F897A0(uScriptParam_0, 1);
		Local_4 = { unk_0x1141852D07400777(uScriptParam_0, 1) };
		Local_7 = { unk_0x18AD8448B5C85E6D(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD51CFE69539DB6D8(uScriptParam_0))
		{
			if (unk_0x7D7BF8DC8C822AC1(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x89924B2EE7CFDC4D(uScriptParam_0))
						{
							unk_0x801429C020C467BA(joaat("p_abat_roller_1_col"));
							if (unk_0x5053BF6D5604065B(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0x8C15E6EC0BC9B4BE(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0x11089405D5CD3FD2(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x89924B2EE7CFDC4D(uScriptParam_0))
						{
							if (unk_0xFF6891E21E7FC193(joaat("michael2")) > 0)
							{
								unk_0x2B0BB514F9140141("map_objects");
								if (unk_0x2917D5E1CB5CE43A("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x89924B2EE7CFDC4D(uScriptParam_0))
						{
							if (unk_0xFF6891E21E7FC193(joaat("michael2")) > 0)
							{
								if (Global_87789)
								{
									if (unk_0x2917D5E1CB5CE43A("map_objects"))
									{
										unk_0x25C9465DC63B7255(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0xD51CFE69539DB6D8(uLocal_3))
						{
							Var3 = { unk_0x1141852D07400777(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f, 0))
							{
								Var6 = { Var0 - Var3 };
								unk_0x88A973CE47FBEF95(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0x3B75450B0AEE5786()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_87790 = 1;
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
		if (unk_0x7F38A542899D217A((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x7F38A542899D217A((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x7F38A542899D217A((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7F38A542899D217A((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x7F38A542899D217A((Param0.f_1 - Param3.f_1)) <= fParam6)
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
	if (unk_0xD51CFE69539DB6D8(uLocal_3))
	{
		unk_0xD4E454973E16D31B(&uLocal_3);
	}
	unk_0x839E9476E54502A2(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x52F20802944F8DCE();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0x04E7E853E31F41A3(uParam0, uParam0))
	{
	}
}

