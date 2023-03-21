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
	
	if (unk_0x76BF814AB8D4CAB8(2))
	{
		func_4();
	}
	if (unk_0x31F12808DC47A9E5(uScriptParam_0))
	{
		unk_0x73D7E57BF0ED7FEB(uScriptParam_0, 1);
		Local_4 = { unk_0x761660F5CE986DC4(uScriptParam_0, 1) };
		Local_7 = { unk_0x26A3403C90A0B224(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x31F12808DC47A9E5(uScriptParam_0))
		{
			if (unk_0x7F92B610D05B72B6(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x428E1B96ACD96150(uScriptParam_0))
						{
							unk_0x9016574B77A748EE(joaat("p_abat_roller_1_col"));
							if (unk_0xEDFE27D1AEA0EA7F(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0x7082ECB3731CD86C(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0x58F6B49606932378(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x428E1B96ACD96150(uScriptParam_0))
						{
							if (unk_0xE7FAF8E78F7D3A73(joaat("michael2")) > 0)
							{
								unk_0x831CD0FBFB26EC7E("map_objects");
								if (unk_0x028356968FDD2DF2("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x428E1B96ACD96150(uScriptParam_0))
						{
							if (unk_0xE7FAF8E78F7D3A73(joaat("michael2")) > 0)
							{
								if (Global_89405)
								{
									if (unk_0x028356968FDD2DF2("map_objects"))
									{
										unk_0x33AE9ADB6499B6DB(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0x31F12808DC47A9E5(uLocal_3))
						{
							Var3 = { unk_0x761660F5CE986DC4(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f, 0))
							{
								Var6 = { Var0 - Var3 };
								unk_0x990FFD4FB6ADD630(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0x64031EF2AE5F9603()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_89406 = 1;
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
		if (unk_0x36E1A96E1D63ED91((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x36E1A96E1D63ED91((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x36E1A96E1D63ED91((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x36E1A96E1D63ED91((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x36E1A96E1D63ED91((Param0.f_1 - Param3.f_1)) <= fParam6)
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
	if (unk_0x31F12808DC47A9E5(uLocal_3))
	{
		unk_0x5BE35A26B9097351(&uLocal_3);
	}
	unk_0x419C9117019F2E5A(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x810C5D6462DD69E6();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0x9D39145AD645E383(uParam0, uParam0))
	{
	}
}

