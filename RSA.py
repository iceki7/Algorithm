from cryptography.hazmat.primitives import serialization  
from cryptography.hazmat.primitives.asymmetric import rsa  
from cryptography.hazmat.primitives import hashes  
from cryptography.hazmat.primitives.asymmetric import padding  
from cryptography.hazmat.backends import default_backend
  
bsave=0
bload=1
if(bsave):
    # 生成随机私钥  
    private_key = rsa.generate_private_key(  
        public_exponent=65537,  
        key_size=2048  
    )  
    
    # 获取私钥的二进制格式  
    private_key_bin = private_key.private_bytes(  
        encoding=serialization.Encoding.PEM,  
        format=serialization.PrivateFormat.PKCS8,  
        encryption_algorithm=serialization.NoEncryption()
    )  
    

    
    # 获取公钥  
    public_key = private_key.public_key()  
    
    # 获取公钥的二进制格式  
    public_key_bin = public_key.public_bytes(  
        encoding=serialization.Encoding.PEM,  
        format=serialization.PublicFormat.SubjectPublicKeyInfo  
    )  
# 将私钥保存到文件

    with open('private.pem', 'wb') as f:  
        f.write(private_key_bin)    
    with open('public.pem', 'wb') as f:  
        f.write(public_key_bin)    

if(bload):
    with open("private.pem", "rb") as private_key_file:
        private_key = serialization.load_pem_private_key(
            private_key_file.read(),
            password=None,
            backend=default_backend()
        )
    with open("public.pem", "rb") as public_key_file:
        public_key = serialization.load_pem_public_key(
            public_key_file.read(),
            backend=default_backend()
        )

# 加密消息  
message = b'Hello, world!'  
ciphertext = public_key.encrypt(  
    plaintext=message,  
    padding=padding.OAEP(  
        mgf=padding.MGF1(algorithm=hashes.SHA256()),  
        algorithm=hashes.SHA256(),  
        label=None  
    )  
)  
print('Ciphertext=', ciphertext)  



# 解密消息  
plaintext = private_key.decrypt(  
    ciphertext,  
    padding.OAEP(  
        mgf=padding.MGF1(algorithm=hashes.SHA256()),  
        algorithm=hashes.SHA256(),  
        label=None  
    )  
)  
print('Plaintext:', plaintext)