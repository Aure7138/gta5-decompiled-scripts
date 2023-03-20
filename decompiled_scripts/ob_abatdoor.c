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
	
	if (unk_0x7547D7CF93115D6D(2))
	{
		func_4();
	}
	if (unk_0xFD68187442384158(uScriptParam_0))
	{
		unk_0x479E7EEEBDEE245D(uScriptParam_0, 1);
		Local_4 = { unk_0xBF1B13057E5119A4(uScriptParam_0, 1) };
		Local_7 = { unk_0xAD9A5677421290F3(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xFD68187442384158(uScriptParam_0))
		{
			if (unk_0xDBBE1D10A2F589A7(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0xFBE2EB4D474675FC(uScriptParam_0))
						{
							unk_0xCBE6AC5010E5CE5C(joaat("p_abat_roller_1_col"));
							if (unk_0xD291857D0C9C7FEC(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f))
								{
									uLocal_3 = unk_0xCEC985247737A30E(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0xC1619F9F00BCB470(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0xFBE2EB4D474675FC(uScriptParam_0))
						{
							if (unk_0x25531002BCF0D968(joaat("michael2")) > 0)
							{
								unk_0x395C5D98343F0040("map_objects");
								if (unk_0xCE40391AB65FE305("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0xFBE2EB4D474675FC(uScriptParam_0))
						{
							if (unk_0x25531002BCF0D968(joaat("michael2")) > 0)
							{
								if (Global_86620)
								{
									if (unk_0xCE40391AB65FE305("map_objects"))
									{
										unk_0x7FFC7B578074E5B8(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0xFD68187442384158(uLocal_3))
						{
							Var3 = { unk_0xBF1B13057E5119A4(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f))
							{
								Var6 = { Var0 - Var3 };
								unk_0xF85858E5CBF4D9F0(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0x94B2D2AEAA1D886E()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_86621 = 1;
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

int func_2(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (unk_0x75E01E8585722F89((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x75E01E8585722F89((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0x75E01E8585722F89((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_3(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_4()
{
	if (unk_0xFD68187442384158(uLocal_3))
	{
		unk_0x4095FD029041DD48(&uLocal_3);
	}
	unk_0xFF467904A8A12BBE(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x883793591E631A3B();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0xA858564DC37EED5E(uParam0, uParam0))
	{
	}
}

