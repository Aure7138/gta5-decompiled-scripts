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
	
	if (unk_0xBCA819F9975BEDFA(2))
	{
		func_4();
	}
	if (unk_0x23E9113C762466ED(uScriptParam_0))
	{
		unk_0x98F0FA127445E343(uScriptParam_0, 1);
		Local_4 = { unk_0x57240623C1BC6E88(uScriptParam_0, 1) };
		Local_7 = { unk_0xED13B51A133E020F(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x23E9113C762466ED(uScriptParam_0))
		{
			if (unk_0x16281BACBF5409B8(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x187275C7EBD45454(uScriptParam_0))
						{
							unk_0xE1324F59713746FA(joaat("p_abat_roller_1_col"));
							if (unk_0x9F746898F7881612(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0x521A82CF998EDB21(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0x04A5FAE5B1EB8E28(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x187275C7EBD45454(uScriptParam_0))
						{
							if (unk_0x82F1A060D8F4583B(joaat("michael2")) > 0)
							{
								unk_0xA0E7D0E8FE126EE8("map_objects");
								if (unk_0xF4F8AE8DD0F08C1E("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x187275C7EBD45454(uScriptParam_0))
						{
							if (unk_0x82F1A060D8F4583B(joaat("michael2")) > 0)
							{
								if (Global_88255)
								{
									if (unk_0xF4F8AE8DD0F08C1E("map_objects"))
									{
										unk_0x15DDCF52D0DB08C1(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0x23E9113C762466ED(uLocal_3))
						{
							Var3 = { unk_0x57240623C1BC6E88(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f, 0))
							{
								Var6 = { Var0 - Var3 };
								unk_0x5DC8C2F2F8A363C2(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0xE9F97E1BC0CACE24()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_88256 = 1;
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
		if (unk_0xE851F22ED3518011((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xE851F22ED3518011((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xE851F22ED3518011((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE851F22ED3518011((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE851F22ED3518011((Param0.f_1 - Param3.f_1)) <= fParam6)
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
	if (unk_0x23E9113C762466ED(uLocal_3))
	{
		unk_0x1AAFEA627BB9C402(&uLocal_3);
	}
	unk_0x924CDE68BA2ED3BA(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x921053BAF754303D();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0x6A7B0D91FD88D9EE(uParam0, uParam0))
	{
	}
}

