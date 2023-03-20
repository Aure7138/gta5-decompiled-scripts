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
	
	if (unk_0x8D841F1DD3FA555F(2))
	{
		func_4();
	}
	if (unk_0x86CCCD2FAE9D5E65(uScriptParam_0))
	{
		unk_0xA8F22633ACC22189(uScriptParam_0, 1);
		Local_4 = { unk_0xB6AE0DAE06D56288(uScriptParam_0, 1) };
		Local_7 = { unk_0x1FC13B3C61DF24B9(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x86CCCD2FAE9D5E65(uScriptParam_0))
		{
			if (unk_0xEBC80CF8CF0257A5(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x5C0486F382B1C9FB(uScriptParam_0))
						{
							unk_0x32A12757CBF48A33(joaat("p_abat_roller_1_col"));
							if (unk_0x33ACB874CECA2D4B(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0xF364195A57BB7AE3(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0x3A45EB0810EBE71C(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x5C0486F382B1C9FB(uScriptParam_0))
						{
							if (unk_0x968BF1C2C695B61A(joaat("michael2")) > 0)
							{
								unk_0x295DC04FC13E025B("map_objects");
								if (unk_0x8E8B546E1A81D27F("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x5C0486F382B1C9FB(uScriptParam_0))
						{
							if (unk_0x968BF1C2C695B61A(joaat("michael2")) > 0)
							{
								if (Global_87573)
								{
									if (unk_0x8E8B546E1A81D27F("map_objects"))
									{
										unk_0x72C254C049438316(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0x86CCCD2FAE9D5E65(uLocal_3))
						{
							Var3 = { unk_0xB6AE0DAE06D56288(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f, 0))
							{
								Var6 = { Var0 - Var3 };
								unk_0xB067093BBAF0A747(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0x8D51D24D214E2FF2()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_87574 = 1;
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
		if (unk_0xB9AA84B14E04BC20((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xB9AA84B14E04BC20((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xB9AA84B14E04BC20((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xB9AA84B14E04BC20((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xB9AA84B14E04BC20((Param0.f_1 - Param3.f_1)) <= fParam6)
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
	if (unk_0x86CCCD2FAE9D5E65(uLocal_3))
	{
		unk_0xAB6AFD52AD641D70(&uLocal_3);
	}
	unk_0x887F4488DA99FD21(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xC23A229F78DAD92A();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0xD994929E13CC1ED5(uParam0, uParam0))
	{
	}
}

