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
	
	if (unk_0x78BF2001491914AC(2))
	{
		func_4();
	}
	if (unk_0x2137828D03306CAF(uScriptParam_0))
	{
		unk_0xA32D9C84C1A93920(uScriptParam_0, 1);
		Local_4 = { unk_0xD1EE0E9FCD74A37B(uScriptParam_0, 1) };
		Local_7 = { unk_0x37C8136AF6C0BC9B(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x2137828D03306CAF(uScriptParam_0))
		{
			if (unk_0x9F6E8D8D1BBF7A81(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x4CB43C80F10ABC26(uScriptParam_0))
						{
							unk_0x0F39DF6675B2333E(joaat("p_abat_roller_1_col"));
							if (unk_0xA1FC9D7AEA164881(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0xA3618B5F6184DAD2(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0xD39DE0C6C0F91C27(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x4CB43C80F10ABC26(uScriptParam_0))
						{
							if (unk_0x09952BA662A7629B(joaat("michael2")) > 0)
							{
								unk_0xA7C81DED990D3418("map_objects");
								if (unk_0x45834D6C20FFF689("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x4CB43C80F10ABC26(uScriptParam_0))
						{
							if (unk_0x09952BA662A7629B(joaat("michael2")) > 0)
							{
								if (Global_88353)
								{
									if (unk_0x45834D6C20FFF689("map_objects"))
									{
										unk_0x7A1ADAF75122D493(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0x2137828D03306CAF(uLocal_3))
						{
							Var3 = { unk_0xD1EE0E9FCD74A37B(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f, 0))
							{
								Var6 = { Var0 - Var3 };
								unk_0x8E979F037EACE55A(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0xBCA469D44FBFAC80()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_88354 = 1;
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
		if (unk_0x3FEF699D13BCC798((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x3FEF699D13BCC798((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x3FEF699D13BCC798((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x3FEF699D13BCC798((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x3FEF699D13BCC798((Param0.f_1 - Param3.f_1)) <= fParam6)
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
	if (unk_0x2137828D03306CAF(uLocal_3))
	{
		unk_0xBE35B7268C680A20(&uLocal_3);
	}
	unk_0xFD213087BC4CC3B3(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xA232817B0B36F2E5();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0x35302CD5A5D37EED(uParam0, uParam0))
	{
	}
}

