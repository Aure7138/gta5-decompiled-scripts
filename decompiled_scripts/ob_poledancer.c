#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	struct<3> Local_2 = { 0, 0, 0 } ;
	var uLocal_5 = 0;
	char* sLocal_6 = NULL;
	int iLocal_7 = 0;
	char* sLocal_8 = NULL;
	int iLocal_9 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	sLocal_6 = "Poledance_01";
	iLocal_7 = joaat("a_f_y_beach_01");
	sLocal_8 = "MISSSTRIP_CLUB";
	if (unk_0xD51CFE69539DB6D8(uScriptParam_0))
	{
		unk_0x2878EC06B3F897A0(uScriptParam_0, 1);
		Local_2 = { unk_0xBD306D8AFEF4E078(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0x2CAFFCD9F5E16D2F(uScriptParam_0);
		unk_0x70EE8EFEE355AD29(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD51CFE69539DB6D8(uScriptParam_0))
		{
			if (unk_0x7D7BF8DC8C822AC1(uScriptParam_0))
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
							unk_0x70EE8EFEE355AD29(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0xAF437D7C802AB246(uLocal_1))
						{
							unk_0xC2EA5B4B2052D2F1(uLocal_1, -1);
							unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 1);
							unk_0x8D6671D78D1F569B(uLocal_1, 1);
							unk_0x52F20802944F8DCE();
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
	if (!unk_0x76B2D234F1895632(uLocal_1))
	{
		if (!unk_0xD525F9D50CBB6A5D(uLocal_1))
		{
			unk_0x2C9DDB5306DF417C(&uLocal_1);
		}
		else
		{
			unk_0x8D6671D78D1F569B(uLocal_1, 1);
		}
	}
	unk_0x52F20802944F8DCE();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (!unk_0xAF437D7C802AB246(uLocal_1))
		{
			if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0x915685CA559C211B(uLocal_1, unk_0xE7869D5D7816A9B6(), 1))
			{
				return 1;
			}
			if (unk_0x3C1B1C07A878AE1D(unk_0xE7869D5D7816A9B6(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0xD0C9DCB982CB2D78(unk_0xE7869D5D7816A9B6()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0xAF437D7C802AB246(uLocal_1))
	{
		if (unk_0xC47857E5E74EA5AF(uLocal_1, -2017877118) == 7)
		{
			unk_0xDCF460AE46C9489C(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0x1B59B67B9DFB09CD(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0xDCF460AE46C9489C(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0x23417CDB252083F9(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0xB06129278F33686E(uLocal_1, sLocal_8, sLocal_6, unk_0x8AF26D6D6BBE6931(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0x76B2D234F1895632(uLocal_1))
	{
		uLocal_1 = unk_0xA7F4088D9A2629CC(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0xE88E7BF4F83B5AAC(uLocal_1, 0);
		unk_0x321C1AA209172C00(uLocal_1, 0);
		unk_0x9BEE7E791BC4D38B(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0x801429C020C467BA(iLocal_7);
	unk_0x2B0BB514F9140141(sLocal_8);
	if (unk_0x5053BF6D5604065B(iLocal_7) && unk_0x2917D5E1CB5CE43A(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0x801429C020C467BA(iLocal_7);
		unk_0x2B0BB514F9140141(sLocal_8);
	}
	return 0;
}

