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
	
	if (unk_0xE8A79675302ED812(2))
	{
		func_4();
	}
	if (unk_0x724D816EA203A79E(uScriptParam_0))
	{
		unk_0x346478B12F69D4E3(uScriptParam_0, 1);
		Local_4 = { unk_0x541C2AEF053615BC(uScriptParam_0, 1) };
		Local_7 = { unk_0xD7490CDEF40F3DA2(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x724D816EA203A79E(uScriptParam_0))
		{
			if (unk_0x08B699D523A3F9CB(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0xA184E93CD7E0E9AA(uScriptParam_0))
						{
							unk_0xF243B7A14FCFD0F4(joaat("p_abat_roller_1_col"));
							if (unk_0xD6513D668481290A(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0xB6896943DA475493(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0x784C605D172817C8(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0xA184E93CD7E0E9AA(uScriptParam_0))
						{
							if (unk_0xB731B8C5BCE89836(joaat("michael2")) > 0)
							{
								unk_0x522053D86D6E1C7A("map_objects");
								if (unk_0xF9E082857622D91E("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0xA184E93CD7E0E9AA(uScriptParam_0))
						{
							if (unk_0xB731B8C5BCE89836(joaat("michael2")) > 0)
							{
								if (Global_89531)
								{
									if (unk_0xF9E082857622D91E("map_objects"))
									{
										unk_0x1F000DD52A4C4208(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0x724D816EA203A79E(uLocal_3))
						{
							Var3 = { unk_0x541C2AEF053615BC(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f, 0))
							{
								Var6 = { Var0 - Var3 };
								unk_0x641B19E156645A92(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0x11F9F9006143871A()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_89532 = 1;
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
		if (unk_0x357058E632979E65((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x357058E632979E65((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x357058E632979E65((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x357058E632979E65((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x357058E632979E65((Param0.f_1 - Param3.f_1)) <= fParam6)
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
	if (unk_0x724D816EA203A79E(uLocal_3))
	{
		unk_0xA35241BCE4C1A24B(&uLocal_3);
	}
	unk_0x2CA123B0622F495C(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x95E4B6F3ED223F5A();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0x3362CDE8460ED38B(uParam0, uParam0))
	{
	}
}

