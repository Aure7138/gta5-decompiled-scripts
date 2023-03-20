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
	if (unk_0xD3FACCDA4D66AEAD(uScriptParam_0))
	{
		unk_0xBB21B5C3111E5F85(uScriptParam_0, 1);
		Local_2 = { unk_0x2E01486DB8218E16(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0x5E6FDC4F3A8C8EDE(uScriptParam_0);
		unk_0x591413670A1EF437(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD3FACCDA4D66AEAD(uScriptParam_0))
		{
			if (unk_0x9AB41624168E4453(uScriptParam_0))
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
							unk_0x591413670A1EF437(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0xEB361B4BD195A4D3(uLocal_1))
						{
							unk_0x9A213173324A528B(uLocal_1, -1);
							unk_0x1C491D82EC5FDAD5(unk_0x0C1D3C552325765B(), 1);
							unk_0x77637031DE326F70(uLocal_1, 1);
							unk_0x78C587487CD40B92();
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
	if (!unk_0x912AD5A10E7633F0(uLocal_1, 0))
	{
		if (!unk_0x7DB334F5F834726A(uLocal_1))
		{
			unk_0x4E82D83B086B5C93(&uLocal_1);
		}
		else
		{
			unk_0x77637031DE326F70(uLocal_1, 1);
		}
	}
	unk_0x78C587487CD40B92();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (!unk_0xEB361B4BD195A4D3(uLocal_1))
		{
			if (unk_0x7298BA0C4D4A4C9E(unk_0xA0081090911D13E5(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0x4AEC0F4FC7FE62C7(uLocal_1, unk_0xA0081090911D13E5(), 1))
			{
				return 1;
			}
			if (unk_0xE2205194B5B97090(unk_0xA0081090911D13E5(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x4B626BBA5EE1CFF0(unk_0xA0081090911D13E5()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0xEB361B4BD195A4D3(uLocal_1))
	{
		if (unk_0x21178DF77817BF39(uLocal_1, -2017877118) == 7)
		{
			unk_0xC9567EA69F3CC4C2(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0xC41F6945C37E358C(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0xC9567EA69F3CC4C2(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0x2FB5C9A04733E5EF(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0x03CA26DCD9179737(uLocal_1, sLocal_8, sLocal_6, unk_0xF25F352E34274C58(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0x912AD5A10E7633F0(uLocal_1, 0))
	{
		uLocal_1 = unk_0xF8418B3B87CFCCBF(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0x6F040B02C824E718(uLocal_1, 0);
		unk_0xB43604F27F1EAE5F(uLocal_1, 0);
		unk_0xFF5CE2ECB4FBD4A8(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0x491067A8E906F22D(iLocal_7);
	unk_0xA9DC3948106CC3E4(sLocal_8);
	if (unk_0x2C1B5A0D3E233FC3(iLocal_7) && unk_0xAD21C77209FD2024(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0x491067A8E906F22D(iLocal_7);
		unk_0xA9DC3948106CC3E4(sLocal_8);
	}
	return 0;
}

