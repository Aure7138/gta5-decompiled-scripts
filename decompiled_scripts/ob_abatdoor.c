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
	
	if (unk_0x524AF15206846700(2))
	{
		func_4();
	}
	if (unk_0xD2CFFE76B625AE55(uScriptParam_0))
	{
		unk_0xA8CA82EB31D1626F(uScriptParam_0, 1);
		Local_4 = { unk_0xA8CFDE65C45F813B(uScriptParam_0, 1) };
		Local_7 = { unk_0x9A98AE1D9D8DEF06(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD2CFFE76B625AE55(uScriptParam_0))
		{
			if (unk_0x179C5C4A19D3D535(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x1B44B568175DB615(uScriptParam_0))
						{
							unk_0x97C59C4E8349D15F(joaat("p_abat_roller_1_col"));
							if (unk_0x875098323FCA8FE6(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0xA8C993B9F5CB4D92(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0x0359A241E2DD22AC(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x1B44B568175DB615(uScriptParam_0))
						{
							if (unk_0xD32535FA4397160F(joaat("michael2")) > 0)
							{
								unk_0x88172B3983EC5071("map_objects");
								if (unk_0x482101C9B3483958("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x1B44B568175DB615(uScriptParam_0))
						{
							if (unk_0xD32535FA4397160F(joaat("michael2")) > 0)
							{
								if (Global_88042)
								{
									if (unk_0x482101C9B3483958("map_objects"))
									{
										unk_0x7318FEB27BFEAB70(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0xD2CFFE76B625AE55(uLocal_3))
						{
							Var3 = { unk_0xA8CFDE65C45F813B(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f, 0))
							{
								Var6 = { Var0 - Var3 };
								unk_0x4EEE9D9427E70F4E(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0xFF104D8C26C113A2()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_88043 = 1;
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
		if (unk_0x43698C98CC255554((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x43698C98CC255554((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x43698C98CC255554((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x43698C98CC255554((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x43698C98CC255554((Param0.f_1 - Param3.f_1)) <= fParam6)
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
	if (unk_0xD2CFFE76B625AE55(uLocal_3))
	{
		unk_0x7C0FE14555841C1E(&uLocal_3);
	}
	unk_0x0049DE0B34213B12(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x7C3AA2D27E16E2AD();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0xC1C5B83BB6719C6C(uParam0, uParam0))
	{
	}
}

