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
	
	if (unk_0xB9B05E900D325C36(2))
	{
		func_4();
	}
	if (unk_0x76B3C79DE564AFC6(uScriptParam_0))
	{
		unk_0x1F18D3C78C8C1A11(uScriptParam_0, 1);
		Local_4 = { unk_0xF177E0DA126D71C8(uScriptParam_0, 1) };
		Local_7 = { unk_0xC82AF3CAB48E70F0(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x76B3C79DE564AFC6(uScriptParam_0))
		{
			if (unk_0x4673A7E6EA033947(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x2E09710078322CDE(uScriptParam_0))
						{
							unk_0xBE91026C1FC72180(joaat("p_abat_roller_1_col"));
							if (unk_0x772F801619C83779(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0x766969A7CEBA91AE(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0xB7E3C36A3BE003B5(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x2E09710078322CDE(uScriptParam_0))
						{
							if (unk_0x7832F791572D5809(joaat("michael2")) > 0)
							{
								unk_0x9F62787D280BF2EC("map_objects");
								if (unk_0xB3379AC2E71D1E7E("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x2E09710078322CDE(uScriptParam_0))
						{
							if (unk_0x7832F791572D5809(joaat("michael2")) > 0)
							{
								if (Global_89338)
								{
									if (unk_0xB3379AC2E71D1E7E("map_objects"))
									{
										unk_0x5049C2D0A202B94E(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0x76B3C79DE564AFC6(uLocal_3))
						{
							Var3 = { unk_0xF177E0DA126D71C8(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f, 0))
							{
								Var6 = { Var0 - Var3 };
								unk_0x0A69FBBF51E1A08F(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0xCD70DA50CCD55658()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_89339 = 1;
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
		if (unk_0x229F35E7CDDBF757((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x229F35E7CDDBF757((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x229F35E7CDDBF757((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x229F35E7CDDBF757((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x229F35E7CDDBF757((Param0.f_1 - Param3.f_1)) <= fParam6)
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
	if (unk_0x76B3C79DE564AFC6(uLocal_3))
	{
		unk_0xF2EFF31F204F4A7D(&uLocal_3);
	}
	unk_0x9793B48C4C8275F8(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xBEE2834559A8897A();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0xB3404E397FF56B3B(uParam0, uParam0))
	{
	}
}

