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
	
	if (unk_0x7D9C4B359376D38A(2))
	{
		func_4();
	}
	if (unk_0x6ADD12BF4D6D2587(uScriptParam_0))
	{
		unk_0xEDC33A771FAEB393(uScriptParam_0, 1);
		Local_4 = { unk_0xB3328BA8976B416C(uScriptParam_0, 1) };
		Local_7 = { unk_0xDB824D597B53CC40(uScriptParam_0, 2) };
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x6ADD12BF4D6D2587(uScriptParam_0))
		{
			if (unk_0xC8F310BD22DD910A(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0xD5BF96615F17406E(uScriptParam_0))
						{
							unk_0x6FF834D85E2DD4C6(joaat("p_abat_roller_1_col"));
							if (unk_0x9A0B2ED5055D3F0B(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0x5E35CF35E65D69B9(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0x59AF3B40AE222194(uLocal_3, Local_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0xD5BF96615F17406E(uScriptParam_0))
						{
							if (unk_0x8F38E94BBF3404CD(joaat("michael2")) > 0)
							{
								unk_0x6450931B826B49D9("map_objects");
								if (unk_0x3A801AA34DD821BE("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0xD5BF96615F17406E(uScriptParam_0))
						{
							if (unk_0x8F38E94BBF3404CD(joaat("michael2")) > 0)
							{
								if (Global_89409)
								{
									if (unk_0x3A801AA34DD821BE("map_objects"))
									{
										unk_0x90CD41CAEBB68E99(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0x6ADD12BF4D6D2587(uLocal_3))
						{
							Var3 = { unk_0xB3328BA8976B416C(uLocal_3, 1) };
							if (!func_2(Var3, Var0, 0.1f, 0))
							{
								Var6 = { Var0 - Var3 };
								unk_0xBD8D47FDC6902B2D(uLocal_3, Var3 + func_1(Var6) * FtoV(unk_0x46C19C2753391FBF()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_89410 = 1;
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
		if (unk_0xE97272C977DEADD3((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xE97272C977DEADD3((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xE97272C977DEADD3((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE97272C977DEADD3((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE97272C977DEADD3((Param0.f_1 - Param3.f_1)) <= fParam6)
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
	if (unk_0x6ADD12BF4D6D2587(uLocal_3))
	{
		unk_0x452336926718D62A(&uLocal_3);
	}
	unk_0x14776E43F90DD454(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x96A3D9A8A4C7AFD4();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0x74C475EB8E73D398(uParam0, uParam0))
	{
	}
}

