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
	if (unk_0x746960881FB19A89(uScriptParam_0))
	{
		unk_0xD9B13F0A69759C12(uScriptParam_0, 1);
		Local_2 = { unk_0x20CBCBD58A2C73B4(uScriptParam_0, 0f, 0f, 0f) };
		uLocal_5 = unk_0xE691E4EA6B4440C6(uScriptParam_0);
		unk_0x4220BD8C5CDBF540(uScriptParam_0, 0, 0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x746960881FB19A89(uScriptParam_0))
		{
			if (unk_0x65E80118D23AFB04(uScriptParam_0))
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
							unk_0x4220BD8C5CDBF540(uScriptParam_0, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0x3E0478C40AB5B38D(uLocal_1))
						{
							unk_0x7D1DC1A952433DD6(uLocal_1, -1);
							unk_0x1717FA72303864E3(unk_0xCFC72E446B0B3AD7(), 1);
							unk_0xE8105B7E3908547D(uLocal_1, 1);
							unk_0xE60DEFFB2A853900();
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
	if (!unk_0x0BA451447C3B1A8D(uLocal_1))
	{
		if (!unk_0x0FF9FE2CB115CFB9(uLocal_1))
		{
			unk_0x7763EDCBED8A5840(&uLocal_1);
		}
		else
		{
			unk_0xE8105B7E3908547D(uLocal_1, 1);
		}
	}
	unk_0xE60DEFFB2A853900();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
	{
		if (!unk_0x3E0478C40AB5B38D(uLocal_1))
		{
			if (unk_0x5093D6F9140AD109(unk_0x9F92518438215DD0(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0xE99AF5B1B3F0BB7C(uLocal_1, unk_0x9F92518438215DD0(), 1))
			{
				return 1;
			}
			if (unk_0x30281E710B12FB9F(unk_0x9F92518438215DD0(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x4A4902C6AC8DCB7E(unk_0x9F92518438215DD0()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0x3E0478C40AB5B38D(uLocal_1))
	{
		if (unk_0xE962BD784DD0E442(uLocal_1, -2017877118) == 7)
		{
			unk_0x7CF15DD8B3815A0D(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0xC38DA9F6525A0ED8(uLocal_1, sLocal_8, sLocal_6, 3))
		{
			unk_0x7CF15DD8B3815A0D(uLocal_1, sLocal_8, sLocal_6, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9)
		{
			if (unk_0x3C17D9ED0E5F3FCA(uLocal_1, sLocal_8, sLocal_6, 3))
			{
				unk_0x4A0F05AE369A5C44(uLocal_1, sLocal_8, sLocal_6, unk_0x3250987ED5A577C0(0, 1065353216));
				iLocal_9 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0x0BA451447C3B1A8D(uLocal_1))
	{
		uLocal_1 = unk_0xA00B5D954AD320BF(5, iLocal_7, Local_2.f_0, Local_2.f_1, Local_2.f_2, uLocal_5, 1, 1);
		unk_0xFF59B84B0722F68E(uLocal_1, 0);
		unk_0x0CFE85F88BE373C8(uLocal_1, 0);
		unk_0x4A1AC49BA4A747F7(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0x3BC6D217451D6BB7(iLocal_7);
	unk_0xDA293E5084610B09(sLocal_8);
	if (unk_0x149162179DBAEDB0(iLocal_7) && unk_0x3DA2EED4204CE591(sLocal_8))
	{
		return 1;
	}
	else
	{
		unk_0x3BC6D217451D6BB7(iLocal_7);
		unk_0xDA293E5084610B09(sLocal_8);
	}
	return 0;
}

