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
	
	if (unk_0x4B4BD87E3D30C50D(2))
	{
		func_4();
	}
	if (unk_0x1F2158D615BC4B25(uScriptParam_0))
	{
		unk_0xB92C428B448B51A4(uScriptParam_0, 1);
		Local_4 = { unk_0xAF99169F0F5AE41D(uScriptParam_0, 1) };
		Local_7 = { unk_0x5F8CECBE07C70F34(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x1F2158D615BC4B25(uScriptParam_0))
		{
			if (unk_0xC6C2EDDDD51B6332(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x505276ED26132D69(uScriptParam_0))
						{
							unk_0xC60576ADD1AECA45(joaat("p_abat_roller_1_col"));
							if (unk_0x4A4B6FD54C499B7D(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0x4A498A71A7B2E7A5(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0x188DB3CD3BF87211(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x505276ED26132D69(uScriptParam_0))
						{
							if (unk_0xB1A77D5C890711F9(joaat("michael2")) > 0)
							{
								unk_0x6E2E777C1AD81C36("map_objects");
								if (unk_0x5263DE3D9A17A86F("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x505276ED26132D69(uScriptParam_0))
						{
							if (unk_0xB1A77D5C890711F9(joaat("michael2")) > 0)
							{
								if (Global_87870)
								{
									if (unk_0x5263DE3D9A17A86F("map_objects"))
									{
										unk_0xFCA9DB0C320BCCA8(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0x1F2158D615BC4B25(uLocal_3))
						{
							Var3 = { unk_0xAF99169F0F5AE41D(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f, 0))
							{
								Var6 = { Var0 - Var3 };
								unk_0x0B5F372F57E469AC(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0x5CB0A4A4240C1B6A()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
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
		if (unk_0x092B928D30C0282D((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x092B928D30C0282D((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x092B928D30C0282D((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x092B928D30C0282D((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x092B928D30C0282D((Param0.f_1 - Param3.f_1)) <= fParam6)
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
	if (unk_0x1F2158D615BC4B25(uLocal_3))
	{
		unk_0x7D779528B7C61C13(&uLocal_3);
	}
	unk_0xFB4F6722A032A0F0(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x2F798BA2098FDADE();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0x35D1CAD6ADAB6491(uParam0, uParam0))
	{
	}
}

