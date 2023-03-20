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
	
	if (unk_0x9CEB376419A71A96(2))
	{
		func_4();
	}
	if (unk_0xC1EDB61CE0A4B94E(uScriptParam_0))
	{
		unk_0x93F4FB97D1F2E7A1(uScriptParam_0, 1);
		Local_4 = { unk_0xF4745590D18D14B8(uScriptParam_0, 1) };
		Local_7 = { unk_0xB3EAD8911713F6A6(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC1EDB61CE0A4B94E(uScriptParam_0))
		{
			if (unk_0xF956B5861E255755(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x2D08B60CBF8230F6(uScriptParam_0))
						{
							unk_0xBECC89ACB4E5D4ED(joaat("p_abat_roller_1_col"));
							if (unk_0x5C9FE32E2FF37989(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0xE6B4261E1DAB4EE0(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0x5C5B23A2682A1514(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x2D08B60CBF8230F6(uScriptParam_0))
						{
							if (unk_0x98934607F8D0FB03(joaat("michael2")) > 0)
							{
								unk_0x198E497B820DA913("map_objects");
								if (unk_0x7B43775D6E0D7325("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x2D08B60CBF8230F6(uScriptParam_0))
						{
							if (unk_0x98934607F8D0FB03(joaat("michael2")) > 0)
							{
								if (Global_88074)
								{
									if (unk_0x7B43775D6E0D7325("map_objects"))
									{
										unk_0xBCEDA21437BEF498(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0xC1EDB61CE0A4B94E(uLocal_3))
						{
							Var3 = { unk_0xF4745590D18D14B8(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f, 0))
							{
								Var6 = { Var0 - Var3 };
								unk_0xA9AD2484206C8140(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0x487AF170F52A57F1()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_88075 = 1;
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
		if (unk_0xF87C669B882D93C0((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xF87C669B882D93C0((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xF87C669B882D93C0((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xF87C669B882D93C0((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xF87C669B882D93C0((Param0.f_1 - Param3.f_1)) <= fParam6)
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
	if (unk_0xC1EDB61CE0A4B94E(uLocal_3))
	{
		unk_0xF30CBC00D9F6D48D(&uLocal_3);
	}
	unk_0x0B87AFC0B2EECA19(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xF5DF8F3392CDD07B();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0x2F6869889D97DFED(uParam0, uParam0))
	{
	}
}

