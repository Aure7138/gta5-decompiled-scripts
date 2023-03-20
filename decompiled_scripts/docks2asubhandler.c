#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x524AF15206846700(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0.f_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!unk_0xF426A5DE932B3BEE(uLocal_2, 1))
	{
		if (!unk_0xF426A5DE932B3BEE(uLocal_2, 0))
		{
			if (unk_0xD2CFFE76B625AE55(uLocal_0))
			{
				if (unk_0x0B4DDB992C7BCF57(uLocal_0, 0))
				{
					unk_0xAF3355298F537BB0(uLocal_0, 0, 1);
					unk_0xA8CA82EB31D1626F(uLocal_0, 1);
					unk_0xF7B3552987613A6B(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0xD2CFFE76B625AE55(uLocal_1))
					{
						unk_0xAF3355298F537BB0(uLocal_1, 0, 1);
						unk_0xA8CA82EB31D1626F(uLocal_1, 1);
						unk_0xF7B3552987613A6B(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0x26545538B51562AD(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
		{
			if (unk_0x0B4DDB992C7BCF57(uLocal_0, 0))
			{
				fVar0 = unk_0xB7A628320EFF8E47(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), unk_0xA8CFDE65C45F813B(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0x26545538B51562AD(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0x4FB9EE3D0706477D(uLocal_0))
				{
					unk_0x26545538B51562AD(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0x26545538B51562AD(&uLocal_2, 1);
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_1();
}

void func_1()
{
	unk_0x9846B4D56971A958(&uLocal_0);
	unk_0x87EFF3C203462E60(&uLocal_1);
	unk_0x7C3AA2D27E16E2AD();
}

