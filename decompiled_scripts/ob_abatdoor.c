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
	
	if (unk_0x24862A9CDC8F8874(2))
	{
		func_4();
	}
	if (unk_0x95CCECA3948CFE7B(uScriptParam_0))
	{
		unk_0xB7A2078CD1C9A82F(uScriptParam_0, 1);
		Local_4 = { unk_0x44C17CCB85A88A1F(uScriptParam_0, 1) };
		Local_7 = { unk_0xF57992155BDFCC67(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x95CCECA3948CFE7B(uScriptParam_0))
		{
			if (unk_0x265A690A472378A4(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x15A98230ABCA9B2D(uScriptParam_0))
						{
							unk_0x7567CEA8E6B5340B(joaat("p_abat_roller_1_col"));
							if (unk_0x0845149A26DABBA5(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0x7C62BC1EB194D985(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0x68931E8B45B3CA92(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x15A98230ABCA9B2D(uScriptParam_0))
						{
							if (unk_0xCBC8FFE55DC722B5(joaat("michael2")) > 0)
							{
								unk_0xC0E8B67A4385D37D("map_objects");
								if (unk_0xF9B86DC1728F1339("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x15A98230ABCA9B2D(uScriptParam_0))
						{
							if (unk_0xCBC8FFE55DC722B5(joaat("michael2")) > 0)
							{
								if (Global_87870)
								{
									if (unk_0xF9B86DC1728F1339("map_objects"))
									{
										unk_0xDC31379F47A12F2B(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0x95CCECA3948CFE7B(uLocal_3))
						{
							Var3 = { unk_0x44C17CCB85A88A1F(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f, 0))
							{
								Var6 = { Var0 - Var3 };
								unk_0xC76B5C68AB6DC7DF(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0x6CE7EDC8B5C46819()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_87871 = 1;
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
		if (unk_0xA3C5926D6E5619AE((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xA3C5926D6E5619AE((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xA3C5926D6E5619AE((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xA3C5926D6E5619AE((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xA3C5926D6E5619AE((Param0.f_1 - Param3.f_1)) <= fParam6)
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
	if (unk_0x95CCECA3948CFE7B(uLocal_3))
	{
		unk_0xA278ECBE30D8AE4F(&uLocal_3);
	}
	unk_0x4BBD72565A0AF033(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xA4E0D8FD51F2A6F7();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0xF8D041B05C3D1FD4(uParam0, uParam0))
	{
	}
}

