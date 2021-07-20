# https://flask.palletsprojects.com/en/1.1.x/quickstart/
from flask import Flask, request, jsonify
import json
from flask_cors import CORS

app = Flask(__name__)
cors = CORS(app, resources={r"/api/*": {"origins": "*"}})

@app.route('/')
def hello_world():
    return 'Welcome to BhanuJi Api services!'

@app.route('/api/get_user', methods=['GET'])
def get_user():
    uid = int(request.args.get("id"))
    f = open('dummy_data.json')
    data = json.load(f)
    print(data)
    print(type(uid))
    
    for i in data:
        if (uid == i['id']):
            user_id = i['id']
            name = i['name']
            phone = i['phone']
            email = i['email']
            success = i['success']
    
    result = {
        'id': user_id,
        'name': name,
        'phone': phone,
        'email': email,
        'success': success
    }
    # return 'user route is working!'
    return jsonify(result)

# @app.route('/api/post_request', methods=['POST'])
# def post_request():

