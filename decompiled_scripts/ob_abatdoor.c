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
	
	if (unk_0xC11469DCA6FC3BB5(2))
	{
		func_4();
	}
	if (unk_0xD42BD6EB2E0F1677(uScriptParam_0))
	{
		unk_0x7D9EFB7AD6B19754(uScriptParam_0, 1);
		Local_4 = { unk_0xA86D5F069399F44D(uScriptParam_0, 1) };
		Local_7 = { unk_0xE09CAF86C32CB48F(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD42BD6EB2E0F1677(uScriptParam_0))
		{
			if (unk_0xF15D7EC08DFE28DB(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x20487F0DA9AF164A(uScriptParam_0))
						{
							unk_0xFA28FE3A6246FC30(joaat("p_abat_roller_1_col"));
							if (unk_0x1283B8B89DD5D1B6(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f))
								{
									uLocal_3 = unk_0x1A2D7464B1CAA1C8(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0x9CC8314DFEDE441E(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x20487F0DA9AF164A(uScriptParam_0))
						{
							if (unk_0x8E34C953364A76DD(joaat("michael2")) > 0)
							{
								unk_0xA862A2AD321F94B4("map_objects");
								if (unk_0x27FF6FE8009B40CA("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x20487F0DA9AF164A(uScriptParam_0))
						{
							if (unk_0x8E34C953364A76DD(joaat("michael2")) > 0)
							{
								if (Global_86798)
								{
									if (unk_0x27FF6FE8009B40CA("map_objects"))
									{
										unk_0xDC6D22FAB76D4874(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0xD42BD6EB2E0F1677(uLocal_3))
						{
							Var3 = { unk_0xA86D5F069399F44D(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f))
							{
								Var6 = { Var0 - Var3 };
								unk_0xF6A103413A202C37(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0x5E72022914CE3C38()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_86799 = 1;
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
	if (unk_0x134549B388167CBF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x134549B388167CBF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0x134549B388167CBF((Param0.f_2 - Param3.f_2)) <= fParam6)
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
	if (unk_0xD42BD6EB2E0F1677(uLocal_3))
	{
		unk_0x931914268722C263(&uLocal_3);
	}
	unk_0x4AD96EF928BD4F9A(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x5E8B6D17FF91CD59();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0xD3852F22AB713A1F(uParam0, uParam0))
	{
	}
}

