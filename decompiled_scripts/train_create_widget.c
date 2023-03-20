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
	unk_0x52A56383568A954B(1);
	if (unk_0x2170E7BC25114A22(3))
	{
		func_1();
	}
	unk_0x9ACC6D23C205B774(0);
	unk_0x57B0CAC4C8EE792B();
	if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
	{
		unk_0xBB9A2DB94A862D7A(unk_0xD5A676B97920D126(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0x99569FEC2425586D(unk_0xD5A676B97920D126(), -177f);
		unk_0xB6AE7C18ADC0F901(0);
	}
	unk_0x4ACD1E4CBA159ED1(joaat("freight"));
	unk_0x4ACD1E4CBA159ED1(joaat("freightcar"));
	unk_0x4ACD1E4CBA159ED1(joaat("freightgrain"));
	unk_0x4ACD1E4CBA159ED1(joaat("freightcont1"));
	unk_0x4ACD1E4CBA159ED1(joaat("freightcont2"));
	unk_0x4ACD1E4CBA159ED1(joaat("tankercar"));
	unk_0x4ACD1E4CBA159ED1(joaat("metrotrain"));
	while ((((((!unk_0x7AD0E9452821C95D(joaat("freight")) || !unk_0x7AD0E9452821C95D(joaat("freightcar"))) || !unk_0x7AD0E9452821C95D(joaat("freightgrain"))) || !unk_0x7AD0E9452821C95D(joaat("freightcont1"))) || !unk_0x7AD0E9452821C95D(joaat("freightcont2"))) || !unk_0x7AD0E9452821C95D(joaat("tankercar"))) || !unk_0x7AD0E9452821C95D(joaat("metrotrain")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
		{
			if (iLocal_7)
			{
				if (unk_0x7887B64A08364778(uLocal_0))
				{
					unk_0x1CB5ED5C31AD30DA(&uLocal_0);
				}
				uLocal_0 = unk_0xF5162ED8B2DFA0B9(uLocal_4, Local_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				Local_1 = { unk_0xEE672DE84D636D1A() };
				iLocal_9 = 0;
			}
			if (unk_0xA4DB44DF73EF4FE5(uLocal_0, 0) && !unk_0xB529B2A4B7C64D6D(uLocal_0, 0))
			{
				unk_0x747B6DA3B6A836BD(uLocal_0, fLocal_5);
				unk_0x80233CD0FC202426(uLocal_0, fLocal_5);
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
	unk_0x9ACC6D23C205B774(1);
	unk_0x01DFCA3621B68C4A();
}

