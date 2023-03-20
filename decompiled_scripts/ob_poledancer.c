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
	if (unk_0x7887B64A08364778(uScriptParam_0))
	{
		unk_0xBBAF4B768DDB7572(uScriptParam_0, 1);
		Local_2 = { unk_0x7E140C583F91AE2B(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0x714F015B4D2DE1DC(uScriptParam_0);
		unk_0x01976E3C7B2E5437(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x7887B64A08364778(uScriptParam_0))
		{
			if (unk_0x097C50E86C2C5672(uScriptParam_0))
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
							unk_0x01976E3C7B2E5437(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x00B5B0B68211D89B(uLocal_1))
						{
							unk_0xD4BBFF77570A437F(uLocal_1, -1);
							unk_0x9988C652FB1151C9(unk_0xFB6B3EEFAB2DD12C(), 1);
							unk_0x7D99F00F48D15ADB(uLocal_1, 1);
							unk_0x01DFCA3621B68C4A();
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
	if (!unk_0xB529B2A4B7C64D6D(uLocal_1, 0))
	{
		if (!unk_0xBB5DD90D4926F21A(uLocal_1))
		{
			unk_0xA2AC407F9132DD0B(&uLocal_1);
		}
		else
		{
			unk_0x7D99F00F48D15ADB(uLocal_1, 1);
		}
	}
	unk_0x01DFCA3621B68C4A();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		if (!unk_0x00B5B0B68211D89B(uLocal_1))
		{
			if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0x7D720C677145C91C(uLocal_1, unk_0xD5A676B97920D126(), 1))
			{
				return 1;
			}
			if (unk_0xC85EEB48C05E2A8A(unk_0xD5A676B97920D126(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x515E262CBF491958(unk_0xD5A676B97920D126()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0x00B5B0B68211D89B(uLocal_1))
	{
		if (unk_0x1774A68441553185(uLocal_1, -2017877118) == 7)
		{
			unk_0x290A57C93304EF16(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0x537CBDB89C995E2B(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0x290A57C93304EF16(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0xEBA40DFF7CCE3511(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0x42B3643EB0DE4C5B(uLocal_1, sLocal_8, sLocal_6, unk_0xB5FEA1F26F05B9F5(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0xB529B2A4B7C64D6D(uLocal_1, 0))
	{
		uLocal_1 = unk_0x8C855D8124E955CE(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0xD6E6C197BF8B123B(uLocal_1, 0);
		unk_0x74084690B489CA8D(uLocal_1, 0);
		unk_0x5457695C257D1470(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0x4ACD1E4CBA159ED1(iLocal_7);
	unk_0x49E996A1E39EAAD7(sLocal_8);
	if (unk_0x7AD0E9452821C95D(iLocal_7) && unk_0xD7669BF035CDA5F6(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0x4ACD1E4CBA159ED1(iLocal_7);
		unk_0x49E996A1E39EAAD7(sLocal_8);
	}
	return 0;
}

