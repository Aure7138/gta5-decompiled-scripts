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
	
	if (unk_0x2EBF608FFE6CA406(2))
	{
		func_4();
	}
	if (unk_0xC844350D5D58C99A(uScriptParam_0))
	{
		unk_0x1E9649458B15960F(uScriptParam_0, 1);
		Local_4 = { unk_0x68F4C0EC296D3901(uScriptParam_0, 1) };
		Local_7 = { unk_0x835730A2D89F6093(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xC844350D5D58C99A(uScriptParam_0))
		{
			if (unk_0x63D2C15453688621(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x1A5AE8A9B1D42A10(uScriptParam_0))
						{
							unk_0x523BCC9DC80CD82F(joaat("p_abat_roller_1_col"));
							if (unk_0xB87F6CF6E5628C67(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0x7707E48765093646(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0xC023D1C4BF532815(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x1A5AE8A9B1D42A10(uScriptParam_0))
						{
							if (unk_0x8A22C4C08282BF26(joaat("michael2")) > 0)
							{
								unk_0x3F423BF5B8125A50("map_objects");
								if (unk_0xB4AE0788C1587752("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x1A5AE8A9B1D42A10(uScriptParam_0))
						{
							if (unk_0x8A22C4C08282BF26(joaat("michael2")) > 0)
							{
								if (Global_95175)
								{
									if (unk_0xB4AE0788C1587752("map_objects"))
									{
										unk_0xD65E6E13E145467B(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0xC844350D5D58C99A(uLocal_3))
						{
							Var3 = { unk_0x68F4C0EC296D3901(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f, 0))
							{
								Var6 = { Var0 - Var3 };
								unk_0xA47B46945FF6DE74(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0x6117725E0134737F()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_95176 = 1;
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
		if (unk_0x755FF954DAE327E1((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x755FF954DAE327E1((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x755FF954DAE327E1((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x755FF954DAE327E1((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x755FF954DAE327E1((Param0.f_1 - Param3.f_1)) <= fParam6)
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
	if (unk_0xC844350D5D58C99A(uLocal_3))
	{
		unk_0xF690C84DADBB3551(&uLocal_3);
	}
	unk_0x71199B01895C6202(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x10FAF14A60A0DBE1();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0x7F8A39872A07D2CE(uParam0, uParam0))
	{
	}
}

