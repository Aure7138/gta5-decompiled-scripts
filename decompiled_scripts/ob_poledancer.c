#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	struct<3> Local_2 = { 0, 0, 0 } ;
	float fLocal_5 = 0f;
	char* sLocal_6 = NULL;
	int iLocal_7 = 0;
	char* sLocal_8 = NULL;
	int iLocal_9 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	sLocal_6 = "Poledance_01";
	iLocal_7 = joaat("a_f_y_beach_01");
	sLocal_8 = "MISSSTRIP_CLUB";
	if (unk_0x7239B21A38F536BA(iScriptParam_0))
	{
		unk_0x428CA6DBD1094446(iScriptParam_0, true);
		Local_2 = { unk_0x1899F328B0E12848(iScriptParam_0, 0f, 0f, 0f) };
		fLocal_5 = unk_0xE83D4F9BA2A38914(iScriptParam_0);
		unk_0x1A9205C1B9EE827F(iScriptParam_0, false, false);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x7239B21A38F536BA(iScriptParam_0))
		{
			if (unk_0xCCBA154209823057(iScriptParam_0))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					
					case 2:
						func_3();
						if (func_2())
						{
							unk_0x1A9205C1B9EE827F(iScriptParam_0, true, false);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x84A2DD9AC37C35C1(iLocal_1))
						{
							unk_0x3EB1FE9E8E908E15(iLocal_1, -1);
							unk_0x056E0FE8534C2949(unk_0x4F8644AF03D0E0D6(), true);
							unk_0x971D38760FBC02EF(iLocal_1, true);
							unk_0x1090044AD1DA76FA();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!unk_0x5F9532F3B5CC2551(iLocal_1))
	{
		if (!unk_0xE659E47AF827484B(iLocal_1))
		{
			unk_0x9614299DCB53E54B(&iLocal_1);
		}
		else
		{
			unk_0x971D38760FBC02EF(iLocal_1, true);
		}
	}
	unk_0x1090044AD1DA76FA();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (!unk_0x84A2DD9AC37C35C1(iLocal_1))
		{
			if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iLocal_1, Var0, false, true, 0))
			{
				return 1;
			}
			if (unk_0xC86D67D52A707CF8(iLocal_1, unk_0xD80958FC74E988A6(), true))
			{
				return 1;
			}
			if (unk_0x17FFC1B2BA35A494(unk_0xD80958FC74E988A6(), iLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x34616828CD07F1A1(unk_0xD80958FC74E988A6()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0x84A2DD9AC37C35C1(iLocal_1))
	{
		if (unk_0x77F1BEB8863288D5(iLocal_1, -2017877118) == 7)
		{
			unk_0xEA47FE3719165B94(iLocal_1, sLocal_8, sLocal_6, 8f, -8f, -1, 0, 0f, false, false, false);
		}
		else if (unk_0x20B711662962B472(iLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0xEA47FE3719165B94(iLocal_1, sLocal_8, sLocal_6, 8f, -8f, -1, 0, 0f, false, false, false);
		}
		else if (!iLocal_9)
		{
			if (unk_0x1F0B79228E461EC9(iLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0x4487C259F0F70977(iLocal_1, sLocal_8, sLocal_6, unk_0x313CE5879CEB6FCD(0f, 1f));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0x5F9532F3B5CC2551(iLocal_1))
	{
		iLocal_1 = unk_0xD49F9B0955C367DE(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, fLocal_5, true, true);
		unk_0xC8A9481A01E63C28(iLocal_1, 0);
		unk_0x63F58F7C80513AAD(iLocal_1, false);
		unk_0x9F8AA94D6D97DBF4(iLocal_1, true);
	}
}

int func_5()
{
	unk_0x963D27A58DF860AC(iLocal_7);
	unk_0xD3BD40951412FEF6(sLocal_8);
	if (unk_0x98A4EB5D89A0C952(iLocal_7) && unk_0xD031A9162D01088C(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0x963D27A58DF860AC(iLocal_7);
		unk_0xD3BD40951412FEF6(sLocal_8);
	}
	return 0;
}

