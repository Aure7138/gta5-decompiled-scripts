#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	struct<3> Local_4 = { 0, 0, 0 } ;
	struct<3> Local_7 = { 0, 0, 0 } ;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (unk_0xC968670BFACE42D9(2))
	{
		func_4();
	}
	if (unk_0x7239B21A38F536BA(iScriptParam_0))
	{
		unk_0x428CA6DBD1094446(iScriptParam_0, true);
		Local_4 = { unk_0x3FEF770D40960D5A(iScriptParam_0, true) };
		Local_7 = { unk_0xAFBD61CC738D9EB9(iScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x7239B21A38F536BA(iScriptParam_0))
		{
			if (unk_0xCCBA154209823057(iScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x060D6E96F8B8E48D(iScriptParam_0))
						{
							unk_0x963D27A58DF860AC(joaat("p_abat_roller_1_col"));
							if (unk_0x98A4EB5D89A0C952(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f))
								{
									iLocal_3 = unk_0x509D5878EB39E842(joaat("p_abat_roller_1_col"), Local_4, true, true, false);
									unk_0x8524A8B0171D5E07(iLocal_3, Local_7, 2, true);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x060D6E96F8B8E48D(iScriptParam_0))
						{
							if (unk_0x2C83A9DA6BFFC4F9(joaat("michael2")) > 0)
							{
								unk_0xD3BD40951412FEF6("map_objects");
								if (unk_0xD031A9162D01088C("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x060D6E96F8B8E48D(iScriptParam_0))
						{
							if (unk_0x2C83A9DA6BFFC4F9(joaat("michael2")) > 0)
							{
								if (Global_86620)
								{
									if (unk_0xD031A9162D01088C("map_objects"))
									{
										unk_0x7FB218262B810701(iScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, false, true, false, 0f, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0x7239B21A38F536BA(iLocal_3))
						{
							Var3 = { unk_0x3FEF770D40960D5A(iLocal_3, true) };
							if (!func_2(Var3, Var0, 0.1f))
							{
								Var6 = { Var0 - Var3 };
								unk_0x06843DA7060A026B(iLocal_3, Var3 + func_1(Var6) * FtoV(unk_0x15C40837039FFAF7()) * Vector(fVar9, fVar9, fVar9), true, false, false, true);
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
	if (unk_0x73D57CFFDD12C355((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x73D57CFFDD12C355((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0x73D57CFFDD12C355((Param0.f_2 - Param3.f_2)) <= fParam6)
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
	if (unk_0x7239B21A38F536BA(iLocal_3))
	{
		unk_0x539E0AE3E6634B9F(&iLocal_3);
	}
	unk_0xE532F5D78798DAAB(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x1090044AD1DA76FA();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(char* sParam0)
{
	if (unk_0x0C515FAB3FF9EA92(sParam0, sParam0))
	{
	}
}

