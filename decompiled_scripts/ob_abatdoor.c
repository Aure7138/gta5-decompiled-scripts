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
	
	if (unk_0xD4BE58A7E3E102AC(2))
	{
		func_4();
	}
	if (unk_0xD4B321D9096B01FC(uScriptParam_0))
	{
		unk_0x860A5CC30A0EF207(uScriptParam_0, 1);
		Local_4 = { unk_0xACE5E491FC1B0D37(uScriptParam_0, 1) };
		Local_7 = { unk_0x762900E9B9F74FD4(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD4B321D9096B01FC(uScriptParam_0))
		{
			if (unk_0xA887AF38A5D654D0(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x3786322187995952(uScriptParam_0))
						{
							unk_0x6BB2B1818CAE531E(joaat("p_abat_roller_1_col"));
							if (unk_0x6DF9C43E3CC645BC(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0x7187764DB5121FC9(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0xF3D48447FACBBE72(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x3786322187995952(uScriptParam_0))
						{
							if (unk_0x222F76006659B0EB(joaat("michael2")) > 0)
							{
								unk_0x36B659209EBDD366("map_objects");
								if (unk_0xB25A0D192C6A0A5B("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x3786322187995952(uScriptParam_0))
						{
							if (unk_0x222F76006659B0EB(joaat("michael2")) > 0)
							{
								if (Global_95130)
								{
									if (unk_0xB25A0D192C6A0A5B("map_objects"))
									{
										unk_0xAF87685A609CD981(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0xD4B321D9096B01FC(uLocal_3))
						{
							Var3 = { unk_0xACE5E491FC1B0D37(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f, 0))
							{
								Var6 = { Var0 - Var3 };
								unk_0xCB3446C6A91D1A78(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0x9927BD5F023FA79D()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_95131 = 1;
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
		if (unk_0x01CBD71E072E9F33((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x01CBD71E072E9F33((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x01CBD71E072E9F33((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x01CBD71E072E9F33((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x01CBD71E072E9F33((Param0.f_1 - Param3.f_1)) <= fParam6)
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
	if (unk_0xD4B321D9096B01FC(uLocal_3))
	{
		unk_0x377C9F2989832369(&uLocal_3);
	}
	unk_0xE0AC40EF164A2569(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x9C9E32388A7886A2();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0x2553916E420E8EF0(uParam0, uParam0))
	{
	}
}

