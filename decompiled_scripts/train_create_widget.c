#region Local Var
	var uLocal_0 = 0;
	struct<3> Local_1 = { 0, 0, 0 } ;
	var uLocal_4 = 0;
	float fLocal_5 = 0f;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	bool bLocal_8 = 0;
	int iLocal_9 = 0;
#endregion

void __EntryFunction__()
{
	Local_1 = { 613f, 6438f, 31f };
	fLocal_5 = 5f;
	iLocal_6 = 1;
	unk_0x7944710FF545C60B(1);
	if (unk_0x2EC83C7ACA23E8A4(3))
	{
		func_1();
	}
	unk_0x90651058E4CCE722(0);
	unk_0x28E47C99DB52BF13();
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), -177f);
		unk_0x8BDD755F07063522(0);
	}
	unk_0x491067A8E906F22D(joaat("freight"));
	unk_0x491067A8E906F22D(joaat("freightcar"));
	unk_0x491067A8E906F22D(joaat("freightgrain"));
	unk_0x491067A8E906F22D(joaat("freightcont1"));
	unk_0x491067A8E906F22D(joaat("freightcont2"));
	unk_0x491067A8E906F22D(joaat("tankercar"));
	unk_0x491067A8E906F22D(joaat("metrotrain"));
	while ((((((!unk_0x2C1B5A0D3E233FC3(joaat("freight")) || !unk_0x2C1B5A0D3E233FC3(joaat("freightcar"))) || !unk_0x2C1B5A0D3E233FC3(joaat("freightgrain"))) || !unk_0x2C1B5A0D3E233FC3(joaat("freightcont1"))) || !unk_0x2C1B5A0D3E233FC3(joaat("freightcont2"))) || !unk_0x2C1B5A0D3E233FC3(joaat("tankercar"))) || !unk_0x2C1B5A0D3E233FC3(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			if (iLocal_7)
			{
				if (unk_0xD3FACCDA4D66AEAD(uLocal_0))
				{
					unk_0x64902A3F134CB04C(&uLocal_0);
				}
				uLocal_0 = unk_0xFEF8A126FCBFF821(uLocal_4, Local_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0xDBAACFEF5824A69B() };
				iLocal_9 = 0;
			}
			if (unk_0x1F1B2B6E500380C5(uLocal_0, 0) && !unk_0x912AD5A10E7633F0(uLocal_0, 0))
			{
				unk_0x63C54320D6CBE3EA(uLocal_0, fLocal_5);
				unk_0xE6245A2E24F69DAE(uLocal_0, fLocal_5);
			}
			if (bLocal_8)
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	unk_0x90651058E4CCE722(1);
	unk_0x78C587487CD40B92();
}

